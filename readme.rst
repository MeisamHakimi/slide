Slides of some computer courses

Ahmad Yoosofan

Tools

`Hovercraft <https://github.com/regebro/hovercraft>`_

.. code:: sh

  pip3 install hovercraft


Run a simple slide

.. code:: sh

  cd cpp
  hovercraft cpp.rst

Open Browser

Type the following link

http://127.0.0.1:8000

List of courses and slides
--------------------------
.. csv-table::
    :header-rows: 1

    course name, folder
    compiler design, cm
    cpp, Advanced Programming: cpp based
    Fundamental of database systems concepts, db
    Operating Systems, os
    Front-end web development fundations and related topics, web

cm (Compiler)
^^^^^^^^^^^^^
.. csv-table::
    :header-rows: 1

    File Name, Description
    in.rst, Intorducton of compiler design and its importance
    la.rst, Lexical Analyser or Scanner
    lex.rst, LEX or flex: lexical analyser generator tool.
    sa.rst, Syntax Alanysis
    rd.rst, recursive descentant syntax analyser or compiler devepment method
    

Convert to html
------------------

.. code:: sh

  cd os
  hovercraft cpu.rst cpu/

Convert to pdf
-----------------
Run hovercraft
^^^^^^^^^^^^^^^^^^
.. code:: sh

  cd os
  hovercraft mem.rst
  Run browser
  Type 127.0.0.1:8000

Mothods
^^^^^^^^
Screen Shot
```````````````
#. Take screen shot by operating system
    1. for ubuntu-mate use short cut < Shift + PrtSc >
    2. Select the area
    3. Save
#. Or use browser screenshot
    #. like https://browsernative.com/screenshot-extension/
#. convert images to pdf
    1. Install tools lilke image magic
    2. sudo apt-get install imagemagick --fix-missing
    3. link https://help.ubuntu.com/community/ImageMagick
    4. convert `*.png` mem1.pdf

dectape: Convert to pdf
```````````````````````````
https://github.com/astefanutti/decktape

https://awesomeopensource.com/project/astefanutti/decktape?categoryPage=29

Installation
~~~~~~~~~~~~~~~~
.. code:: sh

  sudo apt update
  sudo apt install nodejs
  sudo npm install -g npm@latest
  sudo npm install puppeteer --unsafe-perm
  # export PUPPETEER_SKIP_DOWNLOAD='true'  #npm i puppeteer
  sudo npm install -g decktape

.. code:: sh

  npm install decktape
  `npm bin`/decktape

https://github.com/puppeteer/puppeteer/issues/5656#issuecomment-641412196
https://stackoverflow.com/questions/63187371/puppeteer-not-able-to-install-error-failed-to-set-up-chromium-r782078-set-pu

.. code::

  ls -l /etc/apt/sources.list.d/
  ls -l /usr/share/keyrings/

  rm  /usr/share/keyrings/nodesource.gpg
  rm /etc/apt/sources.list.d/nodesource.list.save

https://unix.stackexchange.com/questions/541939/whats-going-wrong-with-my-attempt-to-install-upgrade-node-js-in-linux

.. code:: sh

  # Using Ubuntu
  curl -k -fsSL https://deb.nodesource.com/setup_15.x | sudo -E bash -
  curl -k -fsSL https://deb.nodesource.com/setup_14.x | sudo -E bash -
  sudo apt-get install -y nodej

  sudo apt-get remove nodejs npm node
  sudo apt-get purge nodejs

  sudo rm -rf /usr/local/bin/npm
  sudo rm -rf /usr/local/share/man/man1/node*
  sudo rm -rf /usr/local/lib/dtrace/node.d
  sudo rm -rf ~/.npm
  sudo rm -rf ~/.node-gyp
  sudo rm -rf /opt/local/bin/node
  sudo rm -rf opt/local/include/node
  sudo rm -rf /opt/local/lib/node_modules

  sudo rm -rf /usr/local/lib/node*
  sudo rm -rf /usr/local/include/node*
  sudo rm -rf /usr/local/bin/node

Instructions
~~~~~~~~~~~~~~~
.. code:: sh

  `npm bin`/decktape --slides 1-70 --chrome-path /usr/bin/google-chrome impress http://127.0.0.1:8000/ ~/os922.pdf
  decktape --chrome-path /usr/bin/google-chrome impress http://127.0.0.1:8000/ ~/os915.pdf
  decktape --slides 1,111-273 --chrome-path /usr/bin/google-chrome impress http://127.0.0.1:8000/ ~/os913.pdf
  decktape --slides 1-120 --chrome-path /usr/bin/google-chrome impress http://127.0.0.1:8000/     ~/830.pdf
  decktape --slides 1-120 --chrome-path /usr/bin/google-chrome impress http://127.0.0.1:8000/     ~/d/830.pdf
  decktape --slides 1-111 --chrome-path /usr/bin/google-chrome impress http://127.0.0.1:8000/     ~/901.pdf
  decktape impress http://127.0.0.1:8000/ ~/test/f4.pdf
  decktape --chrome-path /usr/bin/google-chrome impress http://127.0.0.1:8000/ ~/test/dectape/f1.pdf
  decktape --slides 1,2,3 --chrome-path /usr/bin/google-chrome impress http://127.0.0.1:8000/ ~/test/dectape/f2.pdf
  decktape --slides 1,13,116,117 --chrome-path /usr/bin/google-chrome impress http://127.0.0.1:8000/ ~/test/dectape/f3.pdf
  decktape --chrome-path /usr/bin/google-chrome impress http://127.0.0.1:8000/ ~/test/dectape/f4.pdf

Errors "decktape" "TimeoutError:" Navigation timeout of 20000 ms exceeded
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* https://giters.com/astefanutti/decktape/issues/224
* https://github.com/astefanutti/decktape/blob/9874f9e708b3eebcfa7e3061b591070e395c1fb3/decktape.js#L220
* https://github.com/puppeteer/puppeteer/issues/782
* https://ourcodeworld.com/articles/read/1106/how-to-solve-puppeteer-timeouterror-navigation-timeout-of-30000-ms-exceeded
* https://www.bountysource.com/teams/decktape/issues
* https://www.barelysignificant.com/IMSB2020/slides/Cours05#/79

Samples
~~~~~~~~~
.. code:: sh

  # Capture a single slide
  $ decktape --slides 1
  # Capture a series of slides
  $ decktape --slides 1,3,5
  # Capture a range of slides
  $ decktape --slides 1-10
  # Capture a combination of slides and ranges
  $ decktape --slides 1,2,5-10
  $ decktape --slides 1,2,5-10 -s 1024x768

