::/ -*- tab-width: 5; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-

#if CLI_ENABLED == ENABLED

// Functions called from the status menu
static int8_t   get_z_vel               (uint8_t argc, const Menu::arg *argv);
static int8_t   get_xy_vel           (uint8_t argc, const Menu::arg *argv);
static int8_t   get_yx_vel        (uint8_t argc, const Menu::arg *argv);


// Command/function table for the status menu
const struct Menu::command status_menu_commands[] PROGMEM = {
    // command			function called
    // =======          ===============
    {"z velocity",                       get_z_vel },
    {"xy velocity",                     get_xy_vel},
    {"yx velocity",                  get_yx_vel},
    {"Get all",                         get_all_status},
};

// Create the status menu object.
MENU(status_menu, "status", status_menu_commands);

// Called from the top-level menu to run the status menu.
static int8_t
status_mode(uint8_t argc, const Menu::arg *argv)
{
    // Give the user some guidance
    cliSerial->printf_P(PSTR("status Mode Starting \n\n\n"));
}

static int8_t get_z_vel(uint8_t argc, const Menu::arg *argv)
{
    
}
#endif //CLI_ENABLED
