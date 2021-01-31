#!/bin/bash
git add . -f
git commit -m "$1"
git push origin master
