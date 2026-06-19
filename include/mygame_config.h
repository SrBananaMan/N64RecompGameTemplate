#ifndef __MYGAME_CONFIG_H__
#define __MYGAME_CONFIG_H__

#include <filesystem>
#include <string>

namespace mygame {
    inline const std::u8string program_id = u8"MyGameRecompiled";
    inline const std::string program_name = "My Game: Recompiled";

    namespace configkeys {
        namespace general {
        }
    }

    // TODO: Move loading configs to the runtime once we have a way to allow per-project customization.
    void init_config();
};

#endif
