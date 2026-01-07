import sys

print(
    sys.getsizeof(0),        # int
    sys.getsizeof(0.0),      # float
    sys.getsizeof('a'),      # char equivalent
    sys.getsizeof(True)      # bool
)
