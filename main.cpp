#include <iostream>

#include "term-style.h"

int main()
{
    std::cout << ts::bold(ts::bright_cyan("term-style showcase")) << "\n\n";

    std::cout << ts::bold("Text styles") << '\n';
    std::cout << "  " << ts::bold("Bold")
              << "  " << ts::italic("Italic")
              << "  " << ts::underline("Underline")
              << "  " << ts::dim("Dim") << '\n';
    std::cout << "  " << ts::blink("Blink")
              << "  " << ts::reverse("Reverse")
              << "  " << ts::hidden("Hidden") << " (hidden text)"
              << "  " << ts::strike("Strikethrough") << "\n\n";

    std::cout << ts::bold("Regular colors") << '\n';
    std::cout << "  " << ts::black("Black")
              << "  " << ts::red("Red")
              << "  " << ts::green("Green")
              << "  " << ts::yellow("Yellow") << '\n';
    std::cout << "  " << ts::blue("Blue")
              << "  " << ts::magenta("Magenta")
              << "  " << ts::cyan("Cyan")
              << "  " << ts::white("White") << "\n\n";

    std::cout << ts::bold("Bright colors") << '\n';
    std::cout << "  " << ts::bright_black("Bright black")
              << "  " << ts::bright_red("Bright red")
              << "  " << ts::bright_green("Bright green")
              << "  " << ts::bright_yellow("Bright yellow") << '\n';
    std::cout << "  " << ts::bright_blue("Bright blue")
              << "  " << ts::bright_magenta("Bright magenta")
              << "  " << ts::bright_cyan("Bright cyan")
              << "  " << ts::bright_white("Bright white") << "\n\n";

    std::cout << ts::bold("ASCII presets") << '\n';
    std::cout << "  " << ts::preset::ascii::info("Information message") << '\n';
    std::cout << "  " << ts::preset::ascii::warn("Warning message") << '\n';
    std::cout << "  " << ts::preset::ascii::error("Error message") << '\n';
    std::cout << "  " << ts::preset::ascii::success("Success message") << '\n';
    std::cout << "  " << ts::preset::ascii::question("Question message") << "\n\n";

    std::cout << ts::bold("UTF presets") << '\n';
    std::cout << "  " << ts::preset::utf::info("Information message") << '\n';
    std::cout << "  " << ts::preset::utf::warn("Warning message") << '\n';
    std::cout << "  " << ts::preset::utf::error("Error message") << '\n';
    std::cout << "  " << ts::preset::utf::success("Success message") << '\n';
    std::cout << "  " << ts::preset::utf::question("Question message") << "\n\n";

    std::cout << ts::bold("ASCII symbols") << '\n';
    std::cout << "  " << ts::smb::ascii::info
              << ' ' << ts::smb::ascii::warn
              << ' ' << ts::smb::ascii::error
              << ' ' << ts::smb::ascii::success
              << ' ' << ts::smb::ascii::question
              << ' ' << ts::smb::ascii::arrow
              << ' ' << ts::smb::ascii::bullet
              << ' ' << ts::smb::ascii::check
              << ' ' << ts::smb::ascii::cross << "\n\n";

    std::cout << ts::bold("UTF symbols") << '\n';
    std::cout << "  " << ts::smb::utf::info
              << ' ' << ts::smb::utf::warn
              << ' ' << ts::smb::utf::error
              << ' ' << ts::smb::utf::success
              << ' ' << ts::smb::utf::question
              << ' ' << ts::smb::utf::arrow
              << ' ' << ts::smb::utf::bullet
              << ' ' << ts::smb::utf::check
              << ' ' << ts::smb::utf::cross << '\n';
    std::cout << "  " << ts::smb::utf::star
              << ' ' << ts::smb::utf::gear
              << ' ' << ts::smb::utf::clock
              << ' ' << ts::smb::utf::folder
              << ' ' << ts::smb::utf::file
              << ' ' << ts::smb::utf::pencil
              << ' ' << ts::smb::utf::rocket
              << ' ' << ts::smb::utf::fire
              << ' ' << ts::smb::utf::wrench << "\n\n";

    std::cout << ts::bold("Combined and raw formatting") << '\n';
    std::cout << "  " << ts::bold(ts::bright_magenta("Bold bright magenta")) << '\n';
    std::cout << "  " << ts::raw::underline << ts::raw::bright_green
              << "Raw underlined bright green" << ts::raw::reset << '\n';
    std::cout << "  clear_line sequence available: " << ts::raw::clear_line
              << ts::green("done") << '\n';

    return 0;
}
