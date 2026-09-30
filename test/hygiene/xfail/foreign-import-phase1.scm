; There is no FFI at phase 1 until meta shared objects exist.
(import (vanity core))
(begin-for-syntax (foreign-import "stdio.h" (puts)))
