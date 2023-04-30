# FranC - C keywords translated in French

FranC is a collection of macros that represent C keywords translated into French. This project aims to help French-speaking programmers to write code using their own language.

## Usage

To use FranC in your C code, include the `FranC.h` header file in your source files. Then, you can use the macros to write your code in French.

For example:

```c
#include "FranC.h"

vide afficherMessage(chaine message) {
    afficherformat("%s\n", message);
}

entier principal() {
    afficherMessage("Bonjour le monde!");
    retourner QUITTER_SUCCES;
}
```

## Installation

To install FranC, you can download the `FranC.h` file and include it in your C project. Alternatively, you can clone this repository:

```shell
git clone https://github.com/your_username/FranC.git
```

## License

This project is licensed under the GNU License - see the [LICENSE](LICENSE) file for details.
