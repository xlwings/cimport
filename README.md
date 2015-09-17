# CImport
Build and import Python C modules on the fly

## Installation

```
pip install git+https://github.com/ZoomerAnalytics/cimport
```

## Usage

```python
import cimport
cimport.install()

import test_module  # assumes test_module.c in the same folder

# do stuff with test_module
```


## License

This repository contains modified source code originating from [Cython](http://cython.org/).
As such it is licensed under the Apache License, Version 2.0 (the "License").
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
