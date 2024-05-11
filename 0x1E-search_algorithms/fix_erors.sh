#!/bin/bash

dos2unix *.c


sed -1 's//[[:space]]\+$//' *.c
