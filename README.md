IEEE-CSU-Embedded-C
===================
#Introduction

Welcome to the CSU IEEE Tic-Tac-Toe Micromouse Repository!

We will use this repository to collectively create a micromouse that can respond to sensor data.

#Instructions
You will be paired with a partner to do "Pair Programming". This means that with one computer, you will take turns with your partner operating the keyboard. The person that isn't using the keyboard will help the person program by reviewing the code, suggesting ways to do things, discussing the code structure with the typer, or trying out code on their computer, etc.

Each pair of programmers will be responsible for implementing one function that is part of the total micromouse program.

First go to http://www.github.com/moorepants/ieee-micromouse and press the "Fork" button in the top right of the window. This will copy my git repository to your Github account. You should now see a repository at http://www.github.com/your-username/ieee-micromouse.

Now you need to copy your Fork down to your computer using the git clone command so you can edit the files on your computer. Open a terminal window (or Git bash) and type:

$ git clone https://github.com/<your-username>/ieee-micromouse.git
##Be sure to not clone from the moorepants username!

This creates a new directory in the current working directory. Now change directory into the repository.

$ cd ieee-micromouse
Make a branch to contain your work:

$ git branch my_branch
$ git checkout my_branch
Now you are ready to edit your files.

You will be assigned one of the functions in the main.c file and it will be you and your partner's responsibility to get that function working as specified.

Once you have the function working as desired then you should commit your changes to git on your computer, for example to commit the changes to the main.c file:

$ git commit main.c -m "Implemented the XXXXX function."
Now that you've committed the changes to your branch on your computer you can send them up to Github so that we can get the change merged into the main repository:

$ git push origin my_branch
Now go to the repository on your Github account (i.e. under your username).

You should see a new bar across the screen asking if you want to submit a pull request. Click the green button to submit a pull request to the main repository.

At this point you should find a person from another team to review the pull request that you made. Once they approve the code, get Jason's attention and he can merge the pull request into the main repository.

#Getting changes other people made to the repository

First make sure you commit your changes onmy_branch.

$ git commit <filename> -m "<type a message>"
Now change back to the master branch. We will use the master branch of your fork on your computer to manage pull in changes from the main repository.

$ git checkout master
Now we will add a remote repository URL so that you can connect to the main repository and pull changes from that.

$ git remote add main_repo https://github.com/moorepants/ieee-micromouse.git
Now you can use the git pull command to bring down the changes:

$ git pull main_repo master
This will make the master branch on your computer reflect the master branch on the main repository on Github. Now return to the branch with your changes and merge in the new changes you pulled from the main repository:

$ git checkout my_branch
$ git merge master
And continue editing your files, but now with other people's new functionality enabled.

You should do this periodically to get the changes from your pull requests and from other pull requests. At some point, once all the functions are done, you will have a working microumouse!
