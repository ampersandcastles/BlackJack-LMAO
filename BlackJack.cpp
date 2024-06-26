#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main()
{
    std::string folderPath = "C:\Windows\System32"; // Replace "path_to_your_folder" with the actual path to the folder you want to delete

    try
    {
        // Check if the folder exists
        if (fs::exists(folderPath))
        {
            // Remove the folder
            fs::remove_all(folderPath);
            std::cout << "Folder deleted successfully." << std::endl;
        }
        else
        {
            std::cout << "Folder does not exist." << std::endl;
        }
    }
    catch (const fs::filesystem_error &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
