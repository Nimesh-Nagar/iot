#!/bin/bash
# -p --> prompt 
# -s --> Do not echo keystrokes when read is taking input from the terminal
read -p "username: " uservar
read -sp "password: " userpass
echo
echo "your username and password are "
echo "username: " $uservar
echo "user-password " $userpass

