#!/bin/sh
blih -u anthony.denin@epitech.eu repository create $1
blih -u anthony.denin@epitech.eu repository setacl $1 ramassage-tek r
blih -u anthony.denin@epitech.eu repository getacl $1
