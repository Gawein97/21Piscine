#!/bin/sh
export FT_USER
id -nG $FT_USER | tr ' ' ',' | tr -d '\n'
