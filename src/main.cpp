#include <iostream>
#include <filesystem> // para std::filesystem::path

using namespace std;


int main(int argc, char* argv[]) {

    namespace fs = std::filesystem; // nos lo ahorramos
    const fs::path folder{argv[1]};
    const fs::recursive_directory_iterator end{};

    for (auto it = fs::recursive_directory_iterator(folder); it != end; ++it) {
        const auto& entry = *it;
        std::cout << entry.path() << '\n';
    }

    //cout << argc << endl;
    //cout << argv[1] << endl;
    cout << "DuplicateFinder is ready." << endl;
}