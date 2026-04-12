#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <string>

#ifdef _WIN32
    #include <windows.h>
    void clearScreen() { system("cls"); }
#else
    void clearScreen() { std::cout << "\033[2J\033[H"; }
#endif

const std::vector<std::vector<std::string>> frames = {
    {
        "   )  (   ) ",
        "    )( (  ( ",
        "   (  )  )  ",
        "            ",
        "  _________ ",
        " |         |",
        " |  ~~~~~  |---.",
        " |  ~~~~~  |   |",
        " |_________|   |",
        "  \\_______/----'",
        "   _________    ",
        "  /         \\   ",
    },
    {
        "  (   )  (  ",
        "   )(  )(   ",
        "  (  )(  )  ",
        "            ",
        "  _________ ",
        " |         |",
        " |  ~~~~~  |---.",
        " |  ~~~~~  |   |",
        " |_________|   |",
        "  \\_______/----'",
        "   _________    ",
        "  /         \\   ",
    },
    {
        "   ( )( ) ( ",
        "  )  (  )(  ",
        "   )( )  )  ",
        "            ",
        "  _________ ",
        " |         |",
        " |  ~~~~~  |---.",
        " |  ~~~~~  |   |",
        " |_________|   |",
        "  \\_______/----'",
        "   _________    ",
        "  /         \\   ",
    },
    {
        "  ) ( ) ( ) ",
        "   (  )(  ) ",
        "  )  )(  (  ",
        "            ",
        "  _________ ",
        " |         |",
        " |  ~~~~~  |---.",
        " |  ~~~~~  |   |",
        " |_________|   |",
        "  \\_______/----'",
        "   _________    ",
        "  /         \\   ",
    },
};

int main() {
    int frame = 0;

    while (true) {
        
        clearScreen();

        std::cout << "\n  Freshly Brewed Coffee\n\n";

        for (const auto& line : frames[frame]) {
            std::cout << "  " << line << "\n";
        }

        std::cout << "\n  Press Ctrl+C to stop.\n";

        frame = (frame + 1) % frames.size();
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }

    return 0;
}