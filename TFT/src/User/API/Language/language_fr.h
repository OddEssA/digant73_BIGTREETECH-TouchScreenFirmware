#ifndef _LANGUAGE_FR_H_
#define _LANGUAGE_FR_H_

    // config.ini Parameter Settings - Screen Settings and Feature Settings
    #define STRING_EMULATED_M600          "Emuler M600"
    #define STRING_EMULATED_M109_M190     "Emulated M109 / M190"
    #define STRING_EVENT_LED              "Event LED"
    #define STRING_FILE_COMMENT_PARSING   "File comment parsing"
    #define STRING_ROTATED_UI             "Rotation"
    #define STRING_LANGUAGE               "Français"
    #define STRING_ACK_NOTIFICATION       "Style de notification ACK"
    #define STRING_FILES_SORT_BY          "Trier les fichiers par"
    #define STRING_FILES_LIST_MODE        "Fichiers en mode liste"
    #define STRING_FILENAME_EXTENSION     "Show filename extension"
    #define STRING_FAN_SPEED_PERCENTAGE   "Vitesse ventilateur en %"
    #define STRING_PERSISTENT_INFO        "Temp. toujours affichées"
    #define STRING_TERMINAL_ACK           "Afficher ACK sur Terminal"
    #define STRING_SERIAL_ALWAYS_ON       "Serial toujours actif"
    #define STRING_MARLIN_FULLSCREEN      "Mode Marlin plein écran"
    #define STRING_MARLIN_SHOW_TITLE      "Titre en Mode Marlin"
    #define STRING_MARLIN_TYPE            "Type du Mode Marlin"
    #define STRING_MOVE_SPEED             "Vitesse de déplacement (X Y Z)"
    #define STRING_AUTO_LOAD_LEVELING     "Auto-Sauvegarde Leveling"
    #define STRING_PROBING_Z_OFFSET       "Probing for Z offset"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Auto-Alignement moteurs Z"
    #define STRING_PS_AUTO_SHUTDOWN       "Extinction automatique"
    #define STRING_FIL_RUNOUT             "Capteur de filament"
    #define STRING_PL_RECOVERY            "Reprise après coupure"
    #define STRING_PL_RECOVERY_HOME       "Home avant reprise"
    #define STRING_BTT_MINI_UPS           "Support BTT UPS"
    #define STRING_TOUCH_SOUND            "Son des touches"
    #define STRING_TOAST_SOUND            "Notifications"
    #define STRING_ALERT_SOUND            "Popups et alertes"
    #define STRING_HEATER_SOUND           "Notification de chauffe"
    #define STRING_LCD_BRIGHTNESS         "Luminosité"
    #define STRING_LCD_IDLE_BRIGHTNESS    "Diminution luminosité"
    #define STRING_LCD_IDLE_TIME          "Durée avant diminution"
    #define STRING_LCD_LOCK_ON_IDLE       "Bloquer touches en veille"
    #define STRING_LED_ALWAYS_ON          "LED always ON"
    #define STRING_KNOB_LED_COLOR         "LED du bouton rotatif"
    #define STRING_KNOB_LED_IDLE          "Veille du bouton rotatif"
    #define STRING_START_GCODE_ENABLED    "Gcode avant l'impression"
    #define STRING_END_GCODE_ENABLED      "Gcode après l'impression"
    #define STRING_CANCEL_GCODE_ENABLED   "Gcode d'annulation"

    // Machine Parameter Settings - Param Title (ordered by gcode)
    #define STRING_STEPS_SETTING          "Steps par mm"
    #define STRING_FILAMENT_SETTING       "Diamètre filament"
    #define STRING_MAXACCELERATION        "Accélérations maximales"
    #define STRING_MAXFEEDRATE            "Vitesses maximales"
    #define STRING_ACCELERATION           "Accélérations"
    #define STRING_JERK                   "Jerk"
    #define STRING_JUNCTION_DEVIATION     "Ecart de jonction"
    #define STRING_HOME_OFFSET            "Décalage Home"
    #define STRING_FWRETRACT              "Rétraction firmware"
    #define STRING_FWRECOVER              "Récupération firmware"
    #define STRING_RETRACT_AUTO           "Rétraction firmware auto"
    #define STRING_HOTEND_OFFSET          "Décalage 2ème buse"
    #define STRING_STEALTH_CHOP           "StealthChop TMC"
    #define STRING_DELTA_CONFIGURATION    "Réglages Delta"
    #define STRING_DELTA_TOWER_ANGLE      "Corrections d'angle des tours"
    #define STRING_DELTA_ENDSTOP          "Ajustements Endstop"
    #define STRING_PROBE_OFFSET           "Décalage palpeur"
    #define STRING_LIN_ADVANCE            "Linear Advance"
    #define STRING_CURRENT_SETTING        "Courant drivers (mA)"
    #define STRING_HYBRID_THRESHOLD       "Seuil Hybride TMC"
    #define STRING_BUMP_SENSITIVITY       "Sensibilité TMC"
    #define STRING_MBL_OFFSET             "Décalage MBL"

    // Machine Parameter Settings - Param Attributes (ordered by gcode)
    #define STRING_PRINT_ACCELERATION     "Impression"
    #define STRING_RETRACT_ACCELERATION   "Rétraction"
    #define STRING_TRAVEL_ACCELERATION    "Déplacements"
    #define STRING_RETRACT_LENGTH         "Longueur"
    #define STRING_RETRACT_SWAP_LENGTH    "Longueur de retrait"
    #define STRING_RETRACT_FEEDRATE       "Vitesse"
    #define STRING_RETRACT_Z_LIFT         "Décalage en Z"
    #define STRING_RECOVER_LENGTH         "Longueur"
    #define STRING_SWAP_RECOVER_LENGTH    "Longueur de retrait"
    #define STRING_RECOVER_FEEDRATE       "Vitesse"
    #define STRING_SWAP_RECOVER_FEEDRATE  "Vitesse de retrait"

    // Save / Load
    #define STRING_SAVE                   "Sauver"
    #define STRING_RESTORE                "Restaurer"
    #define STRING_RESET                  "Reset"
    #define STRING_EEPROM_SAVE_INFO       "Enregistrer les paramètres dans l'EEPROM ?"
    #define STRING_EEPROM_RESTORE_INFO    "Restaurer les paramètres de l'EEPROM ?"
    #define STRING_EEPROM_RESET_INFO      "Réinitialiser l'EEPROM aux paramètres d'origine du firmware ?"
    #define STRING_SETTINGS_SAVE          "Sauvegarder paramètres"
    #define STRING_SETTINGS_RESTORE       "Restaurer paramètres"
    #define STRING_SETTINGS_RESET         "RàZ des paramètres"
    #define STRING_SETTINGS_RESET_INFO    "Réinitialiser tous les paramètres aux valeurs par défaut ?"
    #define STRING_SETTINGS_RESET_DONE    "Réinitialisation des paramètres réalisé avec succès.\nVeuillez redémarrer l'imprimante."

    // Navigation Buttons
    #define STRING_PAGE_UP                "Précédent"
    #define STRING_PAGE_DOWN              "Suivant"
    #define STRING_UP                     "Monter"
    #define STRING_DOWN                   "Descendre"
    #define STRING_NEXT                   "Suivant"
    #define STRING_BACK                   "Retour"

    // Value Buttons
    #define STRING_INC                    "Plus"
    #define STRING_DEC                    "Moins"
    #define STRING_LOAD                   "Charger"
    #define STRING_UNLOAD                 "Décharger"
    #define STRING_ON                     "ON"
    #define STRING_OFF                    "OFF"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "SMART"
    #define STRING_SLOW                   "Lent"
    #define STRING_NORMAL                 "Normal"
    #define STRING_FAST                   "Rapide"
    #define STRING_ZERO                   "Zéro"
    #define STRING_HALF                   "Moitié"
    #define STRING_FULL                   "Max"
    #define STRING_CUSTOM                 "Custom"
    #define STRING_CLEAR                  "Effacer"
    #define STRING_DEFAULT                "Défaut"

    // Action Buttons
    #define STRING_START                  "Démarrer"
    #define STRING_STOP                   "Stopper"
    #define STRING_PAUSE                  "Pause"
    #define STRING_RESUME                 "Reprendre"
    #define STRING_INIT                   "Init"
    #define STRING_DISCONNECT             "Libérer"
    #define STRING_SHUT_DOWN              "Eteindre"
    #define STRING_FORCE_SHUT_DOWN        "Forcer l'extinction"
    #define STRING_EMERGENCYSTOP          "Arrêt"
    #define STRING_PREHEAT                "Préparer"
    #define STRING_PREHEAT_BOTH           "Global"
    #define STRING_COOLDOWN               "Refroidir"

    // Dialog Buttons
    #define STRING_CONFIRM                "Confirmer"
    #define STRING_CANCEL                 "Annuler"
    #define STRING_WARNING                "Attention"
    #define STRING_CONTINUE               "Continuer"
    #define STRING_CONFIRMATION           "Êtes-vous sûr ?"

    // Process Status
    #define STRING_STATUS                 "Statut"
    #define STRING_READY                  "Prête"
    #define STRING_BUSY                   "Occupée, veuillez patienter..."
    #define STRING_LOADING                "Chargement..."
    #define STRING_UNCONNECTED            "Aucune imprimante connectée !"
    #define STRING_LISTENING              "TFT in Listening Mode!"

    // Process Info
    #define STRING_INFO                   "Infos"
    #define STRING_INVALID_VALUE          "Aucune valeur valide fournie !"
    #define STRING_TIMEOUT_REACHED        "Délai d'attente dépassé !"
    #define STRING_DISCONNECT_INFO        "Vous pouvez maintenant contrôler l'imprimante depuis votre ordinateur !"
    #define STRING_SHUTTING_DOWN          "Extinction en cours..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "Attendez que la température de la buse soit inférieure à %d℃"
    #define STRING_POWER_FAILED           "Continuer l'impression ?"
    #define STRING_PROCESS_RUNNING        "Processus en cours ! Veuillez patienter"
    #define STRING_PROCESS_COMPLETED      "Processus terminé !"
    #define STRING_PROCESS_ABORTED        "Processus annulé !"

    // TFT SD Card, TFT USB Disk, Onboard SD, Filament Runout Process Commands / Status / Info
    #define STRING_TFTSD                  "SD TFT"
    #define STRING_READ_TFTSD_ERROR       "Erreur de lecture de la carte SD TFT !"
    #define STRING_TFTSD_INSERTED         "Carte insérée !"
    #define STRING_TFTSD_REMOVED          "Carte retirée !"
    #define STRING_TFTSD_NOT_DETECTED     "No SD Card detected."
    #define STRING_USB_DISK               "Clé USB"
    #define STRING_READ_USB_DISK_ERROR    "Erreur de lecture de la clé USB !"
    #define STRING_USB_DISK_INSERTED      "Clé USB insérée !"
    #define STRING_USB_DISK_REMOVED       "Clé USB retirée !"
    #define STRING_USB_DISK_NOT_DETECTED  "No USB Disk detected."
    #define STRING_ONBOARDSD              "SD interne"
    #define STRING_READ_ONBOARDSD_ERROR   "Erreur de lecture de la carte SD interne !"
    #define STRING_FILAMENT_RUNOUT        "Fin de Filament !"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "Moteurs"
    #define STRING_XY_UNLOCK              "Moteurs XY"

    #define STRING_START_PRINT            "Démarrer l'impression :\n%s ?"
    #define STRING_STOP_PRINT             "Arrêter l'impression ?"
    #define STRING_IS_PAUSE               "Extrusion impossible quand l'impression est en cours.\nMettre l'impression en pause ?"
    #define STRING_M0_PAUSE               "Suspendu par la commande M0"

    #define STRING_TEST                   "Tester"
    #define STRING_DEPLOY                 "Déployer"
    #define STRING_STOW                   "Rentrer"
    #define STRING_REPEAT                 "Répéter"

    // Printer Tools
    #define STRING_NOZZLE                 "Buse"
    #define STRING_BED                    "Plateau"
    #define STRING_CHAMBER                "Caisson"
    #define STRING_FAN                    "Ventiler"

    #define STRING_BLTOUCH                "BLTouch"
    #define STRING_TOUCHMI                "TouchMi"

    // Values
    #define STRING_1_DEGREE               "1℃"
    #define STRING_5_DEGREE               "5℃"
    #define STRING_10_DEGREE              "10℃"

    #define STRING_001_MM                 "0.01mm"
    #define STRING_01_MM                  "0.1mm"
    #define STRING_1_MM                   "1mm"
    #define STRING_5_MM                   "5mm"
    #define STRING_10_MM                  "10mm"
    #define STRING_100_MM                 "100mm"
    #define STRING_200_MM                 "200mm"

    #define STRING_1_PERCENT              "1%"
    #define STRING_5_PERCENT              "5%"
    #define STRING_10_PERCENT             "10%"
    #define STRING_PERCENT_VALUE          "%d%%"

    #define STRING_5_SECONDS              "5 Sec."
    #define STRING_10_SECONDS             "10 Sec."
    #define STRING_30_SECONDS             "30 Sec."
    #define STRING_60_SECONDS             "1 Min."
    #define STRING_120_SECONDS            "2 Min."
    #define STRING_300_SECONDS            "5 Min."

    // Colors
    #define STRING_WHITE                  "Blanc"
    #define STRING_BLACK                  "Noir"
    #define STRING_BLUE                   "Bleu"
    #define STRING_RED                    "Rouge"
    #define STRING_GREEN                  "Vert"
    #define STRING_CYAN                   "Cyan"
    #define STRING_YELLOW                 "Jaune"
    #define STRING_BROWN                  "Marron"
    #define STRING_GRAY                   "Gris"
    #define STRING_ORANGE                 "Orange"
    #define STRING_INDIGO                 "Indigo"
    #define STRING_VIOLET                 "Violette"
    #define STRING_MAGENTA                "Magenta"
    #define STRING_PURPLE                 "Violet"
    #define STRING_LIME                   "Lime"
    #define STRING_DARKBLUE               "Bleu Foncé"
    #define STRING_DARKGREEN              "Vert Foncé"
    #define STRING_DARKGRAY               "Gris Foncé"

    // Menus
    #define STRING_HEAT                   "Chauffer"
    #define STRING_MOVE                   "Déplacer"
    #define STRING_HOME                   "Home"
    #define STRING_PRINT                  "Imprimer"
    #define STRING_EXTRUDE                "Extruder"
    #define STRING_SETTINGS               "Options"
    #define STRING_SCREEN_SETTINGS        "Écran"
    #define STRING_UI_SETTINGS            "UI"
    #define STRING_SOUND                  "Son"
    #define STRING_MARLIN_MODE_SETTINGS   "Marlin"
    #define STRING_MACHINE_SETTINGS       "Machine"
    #define STRING_PARAMETER_SETTINGS     "Réglages"
    #define STRING_FEATURE_SETTINGS       "Paramètres"
    #define STRING_CONNECTION_SETTINGS    "Connexion"
    #define STRING_SERIAL_PORTS           "S. Ports"
    #define STRING_BAUDRATE               "Vitesse"
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_RGB_SETTINGS           "LED"
    #define STRING_RGB_OFF                "LED Off"
    #define STRING_TERMINAL               "Terminal"
    #define STRING_LEVELING               "Niveaux"
    #define STRING_POINT_1                "Point 1"
    #define STRING_POINT_2                "Point 2"
    #define STRING_POINT_3                "Point 3"
    #define STRING_POINT_4                "Point 4"
    #define STRING_POINT_5                "Point 5"
    #define STRING_BED_LEVELING           "ABL"
    #define STRING_BL_COMPLETE            "Nivellement terminé"
    #define STRING_BL_SMART_FILL          "Les points de sonde manquants ont été intelligemment remplis.\n\nNote : n'oubliez pas de sauvegarder !"
    #define STRING_BL_ENABLE              "BL On"
    #define STRING_BL_DISABLE             "BL Off"
    #define STRING_ABL                    "ABL"
    #define STRING_BBL                    "BBL"
    #define STRING_UBL                    "UBL"
    #define STRING_MBL                    "MBL"
    #define STRING_MBL_SETTINGS           "Nivellement Mesh"
    #define STRING_ABL_SETTINGS           "Nivellement Auto"
    #define STRING_ABL_SETTINGS_BBL       "Nivellement Bilinéaire"
    #define STRING_ABL_SETTINGS_UBL       "Nivellement Unifié"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "Enregistrer dans l'emplacement"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "Charger depuis l'emplacement"
    #define STRING_ABL_SLOT0              "Slot 0"
    #define STRING_ABL_SLOT1              "Slot 1"
    #define STRING_ABL_SLOT2              "Slot 2"
    #define STRING_ABL_SLOT3              "Slot 3"
    #define STRING_ABL_SLOT_EEPROM        "Se souvenir de l'emplacement au prochain redémarrage ?\n(Sauvegarde EEPROM)"
    #define STRING_ABL_Z                  "Z Fade"
    #define STRING_LEVEL_CORNER           "L Corner"
    #define STRING_P_OFFSET               "Z Offset"
    #define STRING_H_OFFSET               "H Offset"
    #define STRING_DISTANCE               "Distance"
    #define STRING_LOAD_UNLOAD            "Charger/Décharger"
    #define STRING_LOAD_UNLOAD_SHORT      "Dé/Charger"
    #define STRING_TOUCHSCREEN_ADJUST     "Ajuster"
    #define STRING_MORE                   "Plus"
    #define STRING_SCREEN_INFO            "Infos"
    #define STRING_BG_COLOR               "Arrière-plan"
    #define STRING_FONT_COLOR             "Police"
    #define STRING_PERCENTAGE             "Avancement"
    #define STRING_PERCENTAGE_SPEED       "Vitesse"
    #define STRING_PERCENTAGE_FLOW        "Débit"
    #define STRING_BABYSTEP               "BabyStep"
    #define STRING_X_INC                  "X+"
    #define STRING_Y_INC                  "Y+"
    #define STRING_Z_INC                  "Z+"
    #define STRING_X_DEC                  "X-"
    #define STRING_Y_DEC                  "Y-"
    #define STRING_Z_DEC                  "Z-"
    #define STRING_X                      "X"
    #define STRING_Y                      "Y"
    #define STRING_Z                      "Z"
    #define STRING_ADJUST_TITLE           "Calibration écran tactile"
    #define STRING_ADJUST_INFO            "Veuillez toucher le point rouge"
    #define STRING_ADJUST_OK              "Succès de l'ajustement"
    #define STRING_ADJUST_FAILED          "Ajustement incorrect, veuillez réessayer"
    #define STRING_UNIFIEDMOVE            "Mouvement"
    #define STRING_UNIFIEDHEAT            "Chauffer"
    #define STRING_TOUCH_TO_EXIT          "Toucher n'importe où pour quitter"
    #define STRING_MAINMENU               "Menu"
    #define STRING_LEVELING_EDGE_DISTANCE "Distance au bord du plateau"
    #define STRING_TUNING                 "Tuning"
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "Autocalibrage PID"
    #define STRING_PID_START_INFO         "L'autocalibrage PID va être lancé. Cela peut prendre quelques minutes.\nContinuer ?"
    #define STRING_PID_START_INFO_2       "Autocalibrage PID en cours !"
    #define STRING_PID_START_INFO_3       "Ne touchez pas l'écran avant la fin (LED verte allumée) !"
    #define STRING_TUNE_EXTRUDER          "Extrudeur"
    #define STRING_TUNE_EXT_EXTRUDE_100   "Ext. 100mm"
    #define STRING_TUNE_EXT_TEMP          "Réglage de l'extrudeur"
    #define STRING_TUNE_EXT_MARK120MM     "Marquer 120 mm sur le filament\nAppuyer ensuite sur '%s'\nMesurer la longueur restante"
    #define STRING_TUNE_EXT_HEATOFF       "Arrêter la chauffe ?"
    #define STRING_TUNE_EXT_ADJ_ESTEPS    "Ajustement E-Steps"
    #define STRING_TUNE_EXT_ESTEPS_SAVED  "Nouveau E-steps enregistré !"
    #define STRING_TUNE_EXT_MEASURED      "Longueur restante"
    #define STRING_TUNE_EXT_OLD_ESTEP     "Ancien : %0.2f"
    #define STRING_TUNE_EXT_NEW_ESTEP     "Nouveau : %0.2f"
    #define STRING_NOTIFICATIONS          "Notifications"
    #define STRING_MESH_EDITOR            "Maillage"
    #define STRING_MESH_TUNER             "Edition du maillage"
    #define STRING_CASE_LIGHT             "Caisson"
    #define STRING_LOAD_STARTED           "Chargement du filament en cours.\nVeuillez attendre la fin du processus."
    #define STRING_UNLOAD_STARTED         "Déchargement du filament en cours.\nVeuillez attendre la fin du processus."
    #define STRING_HEATERS_ON             "Certains éléments sont toujours en chauffe.\nVoulez-vous les arrêter ?"
    #define STRING_PRINT_FINISHED         "   Impression\n   terminée"
    #define STRING_MAIN_SCREEN            "Menu"
    #define STRING_PREVIOUS_PRINT_DATA    "Résumé"
    #define STRING_PRINT_TIME             "Durée : %02u:%02u:%02u"
    #define STRING_FILAMENT_LENGTH        "\nLongueur du filament : %1.2fm"
    #define STRING_FILAMENT_WEIGHT        "\nPoids du filament : %1.2fg"
    #define STRING_FILAMENT_COST          "\nCoût du filament : %1.2f"
    #define STRING_NO_FILAMENT_STATS      "\nAucune statistique de filament."
    #define STRING_CLICK_FOR_MORE         "Afficher résumé"
    #define STRING_EXT_TEMPLOW            "La température de la buse est inférieure à la température minimale (%d℃)."
    #define STRING_HEAT_HOTEND            "Chauffer la buse à %d℃ ?"
    #define STRING_DESIRED_TEMPLOW        "La température de la buse est inférieure à la température désirée (%d℃)."
    #define STRING_WAIT_HEAT_UP           "Attendre la chauffe."
    #define STRING_Z_ALIGN                "Z Align"
    #define STRING_MACROS                 "Macros"
    #define STRING_MESH_VALID             "Test Mesh"
    #define STRING_CONNECT_PROBE          "Connectez le palpeur avant de démarrer le processus. Veillez à le déconnecter ensuite."
    #define STRING_DISCONNECT_PROBE       "Assurez-vous d'avoir déconnecté le palpeur avant d'utiliser cette fonctionnalité."
    #define STRING_CALIBRATION            "Calibrate"

#endif
