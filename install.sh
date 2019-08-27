#!/bin/bash
# Need to be root probably
TARGET="${1:-/usr/local/bin}"
cp cscript_* "${TARGET}"
echo Done
