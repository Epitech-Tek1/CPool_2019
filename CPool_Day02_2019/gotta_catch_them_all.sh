#!/bin/bash
cut -f5 -d: | cut -f2 -d " " | grep "^$1" | wc -l
