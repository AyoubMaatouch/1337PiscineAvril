#!/bin/sh
ls -l | sed n\;g | sed '/^$/d'
