# CImport
Build and import Python C modules on the fly

## Installation

pip install git+https://github.com/ZoomerAnalytics/cimport

## Usage

```
import cimport
cimport.install()

import test_module  # assumes test_module.c in the same folder

# do stuff with test_module
```