#include "FeatureSettings.h"
#include "includes.h"

static uint16_t fe_cur_page = 0;

// parameter values

#define ITEM_TOGGLE_AUTO_NUM 3
const LABEL itemToggleAuto[ITEM_TOGGLE_AUTO_NUM] =
{
  LABEL_OFF,
  LABEL_ON,
  LABEL_AUTO
};

#define ITEM_TOGGLE_SMART_NUM 2
const LABEL itemToggleSmart[ITEM_TOGGLE_SMART_NUM] =
{
  LABEL_ON,
  LABEL_SMART
};

// add key number index of the items
typedef enum
{
  SKEY_EMULATED_M600 = 0,
  SKEY_SERIAL_ALWAYS_ON,
  SKEY_SPEED,
  SKEY_AUTO_LOAD_LEVELING,
  SKEY_PROBING_AFTER_HOMING,
  SKEY_Z_STEPPERS_ALIGNMENT,

  #ifdef PS_ON_PIN
    SKEY_PS_ON,
  #endif

  #ifdef FIL_RUNOUT_PIN
    SKEY_FIL_RUNOUT,
  #endif

  SKEY_PLR_ON,
  SKEY_PLR_HOME,
  SKEY_BTT_MINI_UPS,
  SKEY_START_GCODE_ON,
  SKEY_END_GCODE_ON,
  SKEY_CANCEL_GCODE_ON,
  SKEY_RESET_SETTINGS,        // Keep reset always at the bottom of the settings menu list.
  SKEY_COUNT                  // keep this always at the end
} SKEY_LIST;

// perform action on button press
void updateFeatureSettings(uint8_t item_index)
{
  switch (item_index)
  {
    case SKEY_EMULATED_M600:
      infoSettings.emulated_m600 = (infoSettings.emulated_m600 + 1) % ITEM_TOGGLE_NUM;
      break;

    case SKEY_SERIAL_ALWAYS_ON:
      infoSettings.serial_always_on = (infoSettings.serial_always_on + 1) % ITEM_TOGGLE_NUM;
      break;

    case SKEY_SPEED:
      infoSettings.move_speed = (infoSettings.move_speed + 1) % ITEM_SPEED_NUM;
      break;

    case SKEY_AUTO_LOAD_LEVELING:
      infoSettings.auto_load_leveling = (infoSettings.auto_load_leveling + 1) % ITEM_TOGGLE_NUM;
      break;

    case SKEY_PROBING_AFTER_HOMING:
      infoSettings.probing_after_homing = (infoSettings.probing_after_homing + 1) % ITEM_TOGGLE_NUM;
      break;

    case SKEY_Z_STEPPERS_ALIGNMENT:
      infoSettings.z_steppers_alignment = (infoSettings.z_steppers_alignment + 1) % ITEM_TOGGLE_NUM;
      break;

    #ifdef PS_ON_PIN
      case SKEY_PS_ON:
        infoSettings.ps_on = (infoSettings.ps_on + 1) % ITEM_TOGGLE_AUTO_NUM;
        break;
    #endif

    #ifdef FIL_RUNOUT_PIN
      case SKEY_FIL_RUNOUT:
        infoSettings.fil_runout ^= (1U << 0);
        break;
    #endif

    case SKEY_PLR_ON:
      infoSettings.plr_on = (infoSettings.plr_on + 1) % ITEM_TOGGLE_NUM;
      break;

    case SKEY_PLR_HOME:
      infoSettings.plr_home = (infoSettings.plr_home + 1) % ITEM_TOGGLE_NUM;
      break;

    case SKEY_BTT_MINI_UPS:
      infoSettings.btt_mini_ups = (infoSettings.btt_mini_ups + 1) % ITEM_TOGGLE_NUM;
      break;

    case SKEY_START_GCODE_ON:
      infoSettings.start_gcode_on = (infoSettings.start_gcode_on + 1) % ITEM_TOGGLE_NUM;
      break;

    case SKEY_END_GCODE_ON:
      infoSettings.end_gcode_on = (infoSettings.end_gcode_on + 1) % ITEM_TOGGLE_NUM;
      break;

    case SKEY_CANCEL_GCODE_ON:
      infoSettings.cancel_gcode_on = (infoSettings.cancel_gcode_on + 1) % ITEM_TOGGLE_NUM;
      break;

    case SKEY_RESET_SETTINGS:
      setDialogText(LABEL_SETTINGS_RESET, LABEL_SETTINGS_RESET_INFO, LABEL_CONFIRM, LABEL_CANCEL);
      showDialog(DIALOG_TYPE_ALERT, resetSettings, NULL, NULL);
      break;

    default:
      return;
  }
}  // updateFeatureSettings

// load values on page change and reload
void loadFeatureSettings(LISTITEM * item, uint16_t item_index, uint8_t itemPos)
{
  if (item_index < SKEY_COUNT)
  {
    switch (item_index)
    {
      case SKEY_EMULATED_M600:
        item->icon = iconToggle[infoSettings.emulated_m600];
        break;

      case SKEY_SERIAL_ALWAYS_ON:
        item->icon = iconToggle[infoSettings.serial_always_on];
        break;

      case SKEY_SPEED:
        item->valueLabel = itemSpeed[infoSettings.move_speed].label;
        break;

      case SKEY_AUTO_LOAD_LEVELING:
        item->icon = iconToggle[infoSettings.auto_load_leveling];
        break;

      case SKEY_PROBING_AFTER_HOMING:
        item->icon = iconToggle[infoSettings.probing_after_homing];
        break;

      case SKEY_Z_STEPPERS_ALIGNMENT:
        item->icon = iconToggle[infoSettings.z_steppers_alignment];
        break;

      #ifdef PS_ON_PIN
        case SKEY_PS_ON:
          item->valueLabel = itemToggleAuto[infoSettings.ps_on];
          break;
      #endif

      #ifdef FIL_RUNOUT_PIN
        case SKEY_FIL_RUNOUT:
        {
          LABEL sensorLabel = itemToggleSmart[(infoSettings.fil_runout >> 1) & 1];
          item->valueLabel.index = (infoSettings.fil_runout & 1) ? sensorLabel.index : LABEL_OFF ;
          break;
        }
      #endif

      case SKEY_PLR_ON:
        item->icon = iconToggle[infoSettings.plr_on];
        break;

      case SKEY_PLR_HOME:
        item->icon = iconToggle[infoSettings.plr_home];
        break;

      case SKEY_BTT_MINI_UPS:
        item->icon = iconToggle[infoSettings.btt_mini_ups];
        break;

      case SKEY_START_GCODE_ON:
        item->icon = iconToggle[infoSettings.start_gcode_on];
        break;

      case SKEY_END_GCODE_ON:
        item->icon = iconToggle[infoSettings.end_gcode_on];
        break;

      case SKEY_CANCEL_GCODE_ON:
        item->icon = iconToggle[infoSettings.cancel_gcode_on];
        break;

      case SKEY_RESET_SETTINGS:
        break;

      default:
        break;
    }
  }
}  // loadFeatureSettings

void resetSettings(void)
{
  infoSettingsReset();
  storePara();
  popupReminder(DIALOG_TYPE_SUCCESS, LABEL_INFO, LABEL_SETTINGS_RESET_DONE);
}

void menuFeatureSettings(void)
{
  LABEL title = {LABEL_FEATURE_SETTINGS};

  // set item types
  LISTITEM settingPage[SKEY_COUNT] = {
    {CHARICON_TOGGLE_ON,   LIST_TOGGLE,        LABEL_EMULATED_M600,          LABEL_BACKGROUND},
    {CHARICON_TOGGLE_ON,   LIST_TOGGLE,        LABEL_SERIAL_ALWAYS_ON,       LABEL_BACKGROUND},
    {CHARICON_BLANK,       LIST_CUSTOMVALUE,   LABEL_MOVE_SPEED,             LABEL_NORMAL},
    {CHARICON_TOGGLE_ON,   LIST_TOGGLE,        LABEL_AUTO_LOAD_LEVELING,     LABEL_BACKGROUND},
    {CHARICON_TOGGLE_ON,   LIST_TOGGLE,        LABEL_PROBING_AFTER_HOMING,   LABEL_BACKGROUND},
    {CHARICON_TOGGLE_ON,   LIST_TOGGLE,        LABEL_Z_STEPPERS_ALIGNMENT,   LABEL_BACKGROUND},

    #ifdef PS_ON_PIN
      {CHARICON_BLANK,       LIST_CUSTOMVALUE,   LABEL_PS_ON,                  LABEL_OFF},
    #endif

    #ifdef FIL_RUNOUT_PIN
      {CHARICON_BLANK,       LIST_CUSTOMVALUE,   LABEL_FIL_RUNOUT,             LABEL_OFF},
    #endif

    {CHARICON_TOGGLE_ON,   LIST_TOGGLE,        LABEL_PLR_ON,                 LABEL_BACKGROUND},
    {CHARICON_TOGGLE_ON,   LIST_TOGGLE,        LABEL_PLR_HOME,               LABEL_BACKGROUND},
    {CHARICON_TOGGLE_ON,   LIST_TOGGLE,        LABEL_BTT_MINI_UPS,           LABEL_BACKGROUND},
    {CHARICON_TOGGLE_ON,   LIST_TOGGLE,        LABEL_START_GCODE_ON,         LABEL_BACKGROUND},
    {CHARICON_TOGGLE_ON,   LIST_TOGGLE,        LABEL_END_GCODE_ON,           LABEL_BACKGROUND},
    {CHARICON_TOGGLE_ON,   LIST_TOGGLE,        LABEL_CANCEL_GCODE_ON,        LABEL_BACKGROUND},
    // Keep reset settings always at the bottom of the settings menu list.
    {CHARICON_BLANK,       LIST_MOREBUTTON,    LABEL_SETTINGS_RESET,         LABEL_BACKGROUND}
  };

  uint16_t index = KEY_IDLE;
  SETTINGS now = infoSettings;

  listViewCreate(title, settingPage, SKEY_COUNT, &fe_cur_page, true, NULL, loadFeatureSettings);

  while (infoMenu.menu[infoMenu.cur] == menuFeatureSettings)
  {
    index = listViewGetSelectedIndex();

      if (index < SKEY_COUNT)
      {
        updateFeatureSettings(index);
        listViewRefreshItem(index);
      }

    loopProcess();
  }

  if (memcmp(&now, &infoSettings, sizeof(SETTINGS)))
  {
    storePara();
  }
}
