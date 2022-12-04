#pragma once
#include "lazy_importer.hpp"

#include "../utils/xorstr.hpp"

#include "../utils/pattern/pattern.hpp"

namespace mem {
    uintptr_t game_assembly_base = LI_MODULE_SAFE_(_("GameAssembly.dll"));
    uintptr_t unity_player_base = LI_MODULE_SAFE_(_("UnityPlayer.dll"));
    template <typename T>
    T read(DWORD64 address) {
        if (address > 0x40000 && (address + sizeof(T)) < 0x7FFFFFFF0000) {
            return *(T*)(address);
        }
        else {
            return T{};
        }
    }
    template <typename T>
    void write(DWORD64 address, T data) {
        if (address > 0x40000 && (address + sizeof(T)) < 0x7FFFFFFF0000) {
            *(T*)(address) = data;
        }
    }

    uintptr_t hook_virtual_function(const char* classname, const char* function_to_hook, void* target, const char* name_space);
}

#define safe_read(Addr, Type) mem::read<Type>((DWORD64)Addr)
#define safe_write(Addr, Data, Type) mem::write<Type>((DWORD64)Addr, Data);