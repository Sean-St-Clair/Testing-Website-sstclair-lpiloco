# Testing-Website

Ready to create your own testing website?

You can choose to work alone or with a classmate of your choosing.

## Setup

Use this Guided Project template to create a new repository (see [GitHub-with-CLion](https://github.com/uvmcs120s2023/GitHub-with-CLion) repo for directions).
**Your repository must be named with the convention: Testing-Website-netid**, where netid is your UVM NetID username.
* If you are collaborating, the format is Testing-Website-netid1-netid2. Have one partner create the repository and give the other partner access on GitHub: on the repository page, go to the Settings tab, choose Manage Access, and add the person with their GitHub username.

You all have a silk account (a.k.a. an account on UVM's silk server). This is where your website will be hosted.
* Go to `netid.w3.uvm.edu`, where netid is your UVM NetID. You should either have a green banner at the top or a website you have created previously.

## Design

Brainstorm/choose a function that has a decent amount of logic involved (so that you can create at least 20 different incorrect implementations). 
* The server cannot compile optionals, so don't use them in your function!
* The server also cannot compile anything specific to C++ 17 or newer.
* If you aren't feeling creative, here are a few ideas to get the gears working:
    * A function that returns true if a string passes certain conditions and false otherwise. Conditions could be something like "must include at least one uppercase and one lowercase letter and must have an odd number of vowels".
    * A function that calculates an aptitude for something based on characteristics. For example, how likely you are to be left-handed given what you ate for breakfast, or how likely you are to be a werewolf given your favorite color.
    * A function that generates a name for your pet given its behaviors. For example, if it is loving and not energetic, you can name it "Cuddlekins". 

To add files to your website:
* You will need a file transfer app: I recommend Filezilla (cross-platform) or WinSCP (Windows).
    * To log into the server with the app:
        * Host is w3.uvm.edu
        * User is your NetID username
        * Password is your NetID password
        * Port is 22
    * If you are comfortable using the command line to transfer files instead, the secure copy (`scp`) command will fit your needs.
* You need to put the files in the www-root folder in order for them to show up on your website.
    * I put mine in a CS120 folder inside www-root, which is why there is a CS120 in the URL. You can choose if you want a folder or not.
* Drag and drop files between the two panes on the file transfer app (local computer is on the left; server is on the right).

## Prepare

I have uploaded some of the files I used for the triangle_type testing website [ldion2.w3.uvm.edu/CS120/test_cases.html](http://ldion2.w3.uvm.edu/CS120/test_cases.html). Look through these files to familiarize yourself with them.
* `test_cases.html` is the webpage where you display the function declaration with comments and upload the testing file.
* `style.css` contains the CSS style rules for the website.
* `process.php` is the webpage that displays the bugs found and unfound. It uses PHP to call `engine.py`.
* `engine.py` is a Python script that runs the C++ files. Here's how it works: 
    * It compiles the test suite with the correct implementation of the function, runs it, and stores the output. 
    * Then it compiles the test suite with each incorrect implementation of the function, runs it, and compares the output to the one stored. If the outputs match, the bug was not found; if the outputs are different, you found the bug.

## Adapt to fit your needs

Look through the files for the TODO lines. This is where you will need to make changes.
* Note: When you are making your website, you may want to ssh into the server and run `engine.py` through the command line. This will help when debugging that file.

You will also need to create more files, which you should add to your GitHub repository:
* The correct implementation of your chosen function. 
    * The .cpp file should be named `function_name_correct.cpp`, where function_name is your function's name. 
        * The  `triangle_type_correct.cpp` file from my site is included in the starter code as an example of what you should put in this file.
    * SSH into the server and compile your correct implementation (with C++14) before moving on to making the incorrect versions:
        * Open `Terminal` (Mac/Linux) or `cmd` (Windows) and ssh into the server:
              `ssh netid@w3.uvm.edu` where netid is your UVM NetID. It will prompt for your password. Then navigate to the folder with your implementation in it using the change directory (`cd`) command.
        * `g++ -c -std=c++1y function_name_correct.cpp` will compile the file. If no errors are output, then you're good to go!
* The 20+ incorrect implementations of your chosen function. The .cpp files should be named `function_name_incorrectX.cpp`, where function_name is your function's name and X is the number [1-20+]. Write comments to describe the changes made in each
incorrect implementation.
    * Note: these files should contain the function implementation only. They should **not** have a main function. 
    * One of the incorrect files from my site,  `triangle_type_incorrect1.cpp`, is included in the starter code as an example of how you should format this file.
* `test_cases.cpp`, which has the main function. This function should contain a robust test suite that catches all the bugs.
* Note: when creating the incorrect implementations, you may need to "Reload CMake Project" (under Tools -> CMake) for CLion to show you the appropriate code highlighting.

Your goal is to get a fully functioning website with your testing function.


## Grading

If you are collaborating, both partners have to submit the project.

### Grading Rubric
Note that this guided project is worth 30 points instead of the usual 20 points. This is because it requires more time and effort to complete.
- [ ] (2 pts) GitHub setup. All necessary files are in the repository.
- [ ] (1 pt) Good, consistent coding style that matches starter code.
- [ ] (1 pt) Share website URL.
- [ ] (1 pt) Share secret token. -> mellon 
- [ ] (10 pts) Correct implementation and 20+ different incorrect implementations.
- [ ] (5 pts) test_cases.cpp with testing suite that catches all bugs.
- [ ] (10 pts) Website functions correctly.
