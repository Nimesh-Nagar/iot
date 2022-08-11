#!/bin/bash
#How to declare a variable
#variablename=value (without space)
system_hostname=`uname -n`
system_kernel_version=`uname -v`
system_kernel_name=`uname -s`
echo "Your System Name : "$system_hostname
echo "Your kernel version : "$system_kernel_version
echo "your kernel name: "$system_kernel_name
