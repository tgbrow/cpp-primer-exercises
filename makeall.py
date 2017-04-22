#!/usr/bin/python

import argparse
import os
import re
import subprocess
import sys

parser = argparse.ArgumentParser(description='Run `make (clean)` for all exercises.')
parser.add_argument('-c', '--clean', action='store_true', help='Run `make clean` rather than just `make`.')
parser.add_argument('-v', '--verbose', action='store_true', help='Show all output.')
args = parser.parse_args()

subdirs = [f for f in os.listdir('.') if re.match(r'[0-9][{2}_[0-9]{2}', f)]
out = sys.stdout if args.verbose else open(os.devnull, 'w')
err = sys.stderr if args.verbose else open(os.devnull, 'w')

for subdir in subdirs:
    if 'Makefile' in os.listdir(subdir):
        os.chdir(subdir)
        if args.clean:
            subprocess.call(['make', 'clean'], stdout=out, stderr=err)
        else:
            subprocess.call(['make'], stdout=out, stderr=err)
        os.chdir('..')
