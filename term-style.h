#ifndef TERM_STYLE_LIBRARY_HPP
#define TERM_STYLE_LIBRARY_HPP

#include <string>
#include <string_view>   // добавлено

namespace ts
{
    namespace raw
    {
        // text style
        constexpr std::string_view reset = "\033[0m";
        constexpr std::string_view bold = "\033[1m";
        constexpr std::string_view italic ="\033[3m";
        constexpr std::string_view underline = "\033[4m";

        constexpr std::string_view black = "\033[30m";
        constexpr std::string_view red = "\033[31m";
        constexpr std::string_view green = "\033[32m";
        constexpr std::string_view yellow = "\033[33m";
        constexpr std::string_view blue = "\033[34m";
        constexpr std::string_view magenta = "\033[35m";
        constexpr std::string_view cyan = "\033[36m";
        constexpr std::string_view white = "\033[37m";

        constexpr std::string_view bright_black = "\033[90m";
        constexpr std::string_view bright_red = "\033[91m";
        constexpr std::string_view bright_green = "\033[92m";
        constexpr std::string_view bright_yellow = "\033[93m";
        constexpr std::string_view bright_blue = "\033[94m";
        constexpr std::string_view bright_magenta = "\033[95m";
        constexpr std::string_view bright_cyan = "\033[96m";
        constexpr std::string_view bright_white = "\033[97m";

        constexpr std::string_view dim = "\033[2m";
        constexpr std::string_view blink = "\033[5m";
        constexpr std::string_view reverse = "\033[7m";
        constexpr std::string_view hidden = "\033[8m";
        constexpr std::string_view strike = "\033[9m";

        constexpr std::string_view clear = "\033[2J";
        constexpr std::string_view clear_line = "\033[K";
    }

    namespace smb // symbols
    {
        namespace ascii
        {
            constexpr std::string_view info    = "[i]";
            constexpr std::string_view warn    = "[!]";
            constexpr std::string_view error   = "[X]";
            constexpr std::string_view success = "[✓]";
            constexpr std::string_view question= "[?]";
            constexpr std::string_view arrow   = "->";
            constexpr std::string_view bullet  = "*";
            constexpr std::string_view check   = "[+]";
            constexpr std::string_view cross   = "[-]";
        }
        namespace utf
        {
            constexpr std::string_view info     = "ℹ️";
            constexpr std::string_view warn     = "⚠️";
            constexpr std::string_view error    = "❌";
            constexpr std::string_view success  = "✅";
            constexpr std::string_view question = "❓";
            constexpr std::string_view arrow    = "➜";
            constexpr std::string_view bullet   = "•";
            constexpr std::string_view check    = "✔️";
            constexpr std::string_view cross    = "✖️";
            constexpr std::string_view star     = "⭐";
            constexpr std::string_view gear     = "⚙️";
            constexpr std::string_view clock    = "🕐";
            constexpr std::string_view folder   = "📁";
            constexpr std::string_view file     = "📄";
            constexpr std::string_view pencil   = "✏️";
            constexpr std::string_view rocket   = "🚀";
            constexpr std::string_view fire     = "🔥";
            constexpr std::string_view wrench   = "🔧";
        }
    }

    // --- Стили и цвета (возвращают std::string) ---
    inline std::string bold(const std::string_view text)
    {
        return std::string(raw::bold) + std::string(text) + std::string(raw::reset);
    }
    inline std::string italic(const std::string_view text)
    {
        return std::string(raw::italic) + std::string(text) + std::string(raw::reset);
    }
    inline std::string underline(const std::string_view text)
    {
        return std::string(raw::underline) + std::string(text) + std::string(raw::reset);
    }
    inline std::string dim(const std::string_view text)
    {
        return std::string(raw::dim) + std::string(text) + std::string(raw::reset);
    }
    inline std::string blink(const std::string_view text)
    {
        return std::string(raw::blink) + std::string(text) + std::string(raw::reset);
    }
    inline std::string reverse(const std::string_view text)
    {
        return std::string(raw::reverse) + std::string(text) + std::string(raw::reset);
    }
    inline std::string hidden(const std::string_view text)
    {
        return std::string(raw::hidden) + std::string(text) + std::string(raw::reset);
    }
    inline std::string strike(const std::string_view text)
    {
        return std::string(raw::strike) + std::string(text) + std::string(raw::reset);
    }

    inline std::string black(const std::string_view text)
    {
        return std::string(raw::black) + std::string(text) + std::string(raw::reset);
    }
    inline std::string red(const std::string_view text)
    {
        return std::string(raw::red) + std::string(text) + std::string(raw::reset);
    }
    inline std::string green(const std::string_view text)
    {
        return std::string(raw::green) + std::string(text) + std::string(raw::reset);
    }
    inline std::string yellow(const std::string_view text)
    {
        return std::string(raw::yellow) + std::string(text) + std::string(raw::reset);
    }
    inline std::string blue(const std::string_view text)
    {
        return std::string(raw::blue) + std::string(text) + std::string(raw::reset);
    }
    inline std::string magenta(const std::string_view text)
    {
        return std::string(raw::magenta) + std::string(text) + std::string(raw::reset);
    }
    inline std::string cyan(const std::string_view text)
    {
        return std::string(raw::cyan) + std::string(text) + std::string(raw::reset);
    }
    inline std::string white(const std::string_view text)
    {
        return std::string(raw::white) + std::string(text) + std::string(raw::reset);
    }

    inline std::string bright_black(const std::string_view text)
    {
        return std::string(raw::bright_black) + std::string(text) + std::string(raw::reset);
    }
    inline std::string bright_red(const std::string_view text)
    {
        return std::string(raw::bright_red) + std::string(text) + std::string(raw::reset);
    }
    inline std::string bright_green(const std::string_view text)
    {
        return std::string(raw::bright_green) + std::string(text) + std::string(raw::reset);
    }
    inline std::string bright_yellow(const std::string_view text)
    {
        return std::string(raw::bright_yellow) + std::string(text) + std::string(raw::reset);
    }
    inline std::string bright_blue(const std::string_view text)
    {
        return std::string(raw::bright_blue) + std::string(text) + std::string(raw::reset);
    }
    inline std::string bright_magenta(const std::string_view text)
    {
        return std::string(raw::bright_magenta) + std::string(text) + std::string(raw::reset);
    }
    inline std::string bright_cyan(const std::string_view text)
    {
        return std::string(raw::bright_cyan) + std::string(text) + std::string(raw::reset);
    }
    inline std::string bright_white(const std::string_view text)
    {
        return std::string(raw::bright_white) + std::string(text) + std::string(raw::reset);
    }

    // --- Пресеты (готовые сообщения с иконками) ---
    namespace preset
    {
        namespace ascii
        {
            inline std::string info(const std::string_view text)
            {
                return blue(std::string(smb::ascii::info) + " " + std::string(text));
            }
            inline std::string warn(const std::string_view text)
            {
                return yellow(std::string(smb::ascii::warn) + " " + std::string(text));
            }
            inline std::string error(const std::string_view text)
            {
                return red(std::string(smb::ascii::error) + " " + std::string(text));
            }
            inline std::string success(const std::string_view text)
            {
                return green(std::string(smb::ascii::success) + " " + std::string(text));
            }
            inline std::string question(const std::string_view text)
            {
                return cyan(std::string(smb::ascii::question) + " " + std::string(text));
            }
            inline std::string fatal(const std::string_view text)
            {
                return red(std::string(smb::ascii::warn) + std::string(smb::ascii::warn) + std::string(smb::ascii::warn) + " " + std::string(text));
            }
        }

        namespace utf
        {
            inline std::string info(const std::string_view text)
            {
                return blue(std::string(smb::utf::info) + " " + std::string(text));
            }
            inline std::string warn(const std::string_view text)
            {
                return yellow(std::string(smb::utf::warn) + " " + std::string(text));
            }
            inline std::string error(const std::string_view text)
            {
                return red(std::string(smb::utf::error) + " " + std::string(text));
            }
            inline std::string success(const std::string_view text)
            {
                return green(std::string(smb::utf::success) + " " + std::string(text));
            }
            inline std::string question(const std::string_view text)
            {
                return cyan(std::string(smb::utf::question) + " " + std::string(text));
            }
            inline std::string fatal(const std::string_view text)
            {
                return red(std::string(smb::utf::warn) + std::string(smb::utf::warn) + std::string(smb::utf::warn) + " " + std::string(text));
            }
        }
    }
}

#endif // TERM_STYLE_LIBRARY_HPP