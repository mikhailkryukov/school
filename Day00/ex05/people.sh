#!/bin/sh
ldapsearch -x -L "(uid=z*)" cn | grep '^cn:' | sort -r | cut -c5-999

