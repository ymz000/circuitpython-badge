#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_global_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_PA00) },
    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_PA01) },
    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_PA02) },

    { MP_ROM_QSTR(MP_QSTR_RADIO0), MP_ROM_PTR(&pin_PA03) },
    { MP_ROM_QSTR(MP_QSTR_RADIO1), MP_ROM_PTR(&pin_PA04) },
    { MP_ROM_QSTR(MP_QSTR_RADIO2), MP_ROM_PTR(&pin_PA22) },
    { MP_ROM_QSTR(MP_QSTR_RADIO3), MP_ROM_PTR(&pin_PA05) },
    { MP_ROM_QSTR(MP_QSTR_RADIO4), MP_ROM_PTR(&pin_PA06) },
    { MP_ROM_QSTR(MP_QSTR_RADIO5), MP_ROM_PTR(&pin_PA07) },

    { MP_ROM_QSTR(MP_QSTR_SDA0), MP_ROM_PTR(&pin_PA08) },
    { MP_ROM_QSTR(MP_QSTR_SCL0), MP_ROM_PTR(&pin_PA09) },

    { MP_ROM_QSTR(MP_QSTR_Z), MP_ROM_PTR(&pin_PA10) },
    { MP_ROM_QSTR(MP_QSTR_X), MP_ROM_PTR(&pin_PA11) },
    { MP_ROM_QSTR(MP_QSTR_O), MP_ROM_PTR(&pin_PA14) },
    { MP_ROM_QSTR(MP_QSTR_S), MP_ROM_PTR(&pin_PA15) },

    { MP_ROM_QSTR(MP_QSTR_RIGHT), MP_ROM_PTR(&pin_PA22) },
    { MP_ROM_QSTR(MP_QSTR_DOWN), MP_ROM_PTR(&pin_PA23) },
    { MP_ROM_QSTR(MP_QSTR_UP), MP_ROM_PTR(&pin_PA27) },
    { MP_ROM_QSTR(MP_QSTR_LEFT), MP_ROM_PTR(&pin_PA28) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_global_dict_table);
