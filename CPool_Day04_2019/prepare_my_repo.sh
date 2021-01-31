#!/bin/bash
blih -u clement.muth@epitech.eu repository create $1
blih -u clement.muth@epitech.eu repository setacl $1 ramassage-tek r
blih -u clement.muth@epitech.eu repository getacl $1
