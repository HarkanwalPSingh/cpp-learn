#!/opt/homebrew/bin/python3

import os
import sys

COPYRIGHT_YEAR = "2024"
AUTHOR = "Harkanwal P Singh"
COPYRIGHT_TEXT = "// Copyright (c) {} {}. All rights reserved.\n".format(COPYRIGHT_YEAR, AUTHOR)

def add_copyright(file_path):
    with open(file_path, 'r') as f:
        content = f.read()

    if COPYRIGHT_TEXT not in content:
        print("Adding copyright to", file_path)
        with open(file_path, 'w') as f:
            f.write(COPYRIGHT_TEXT + "\n" + content)

if __name__ == "__main__":
    for file_path in sys.argv[1:]:
        if file_path.endswith('.cc') or file_path.endswith('.cpp') or file_path.endswith('.h'):
            add_copyright(file_path)
