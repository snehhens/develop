//Step-by-Step Guide to Initialize Git and Push C++ Program to Repository
//use git status to check status

#include <iostream>

int main() {
    using namespace std; // Use the std namespace

    // Step 1: Initialize a Git Repository
    cout << "Step 1: Initializing a Git Repository...\n";
    // Git Command: git init

    // Step 2: Create a C++ Program
    cout << "\nStep 2: Creating a C++ Program...\n";

//example of hello.cpp program  
/*#include <iostream>

int main() {
    cout << "Hello, world!" << endl;
    return 0;
}*/
   

    // Step 3: Add the File to Git
    cout << "\nStep 3: Adding the File to Git...\n";
    // Git Command: git add hello.cpp

    // Step 4: Commit Changes
    cout << "\nStep 4: Committing Changes...\n";
    // Git Command: git commit -m "Add hello.cpp program"

    // Step 5: Create a Remote Repository
    cout << "\nStep 5: Creating a Remote Repository...\n";
    cout << "Please create a remote repository on GitHub, GitLab, or Bitbucket.\n";

    // Step 6: Add a Remote Origin
    cout << "\nStep 6: Adding a Remote Origin...\n";
     // Replace with your actual remote repository URL
    cout << "Remote URL set to: \n";
    // Git Command: git remote add origin <remote-url>

    // Step 7: Push to Remote Repository
    cout << "\nStep 7: Pushing to Remote Repository...\n";
    cout << "Please push your code using your Git client or command-line.\n";
    // Git Command: git push -u origin main

    cout << "\nAll steps completed successfully. Your C++ program is now ready for pushing to the remote repository.\n";

    return 0;
}
