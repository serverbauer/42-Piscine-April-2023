#!/bin/bash
echo $(id -Gn $FT_USER | tr ' ' ',')
