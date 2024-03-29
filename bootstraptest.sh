#!/bin/bash
make clean
if !( sudo make hatch -j ) ; then
  echo "Failed to boostrap";
  exit 1;
fi

if !( make clean && make tests -j && sudo make install -j ) ; then
  echo "Failed second build";
  exit 1;
fi

if !( make clean && make tests -j && sudo make install -j ) ; then
  echo "Failed third build";
  exit 1;
fi

if !( make clean && make tests -j && sudo make install -j ) ; then
  echo "Failed fourth build";
  exit 1;
fi
make clean

echo "Successful bootstrap!";
