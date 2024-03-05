import json
import numpy as np


class BytesToIntListEncoder(json.JSONEncoder):
    """Allows encoding of a bytestring to JSON by turning it into
    a list of `uint8`"""

    def default(self, o):
        if isinstance(o, bytes):
            return np.frombuffer(o, dtype=np.uint8).tolist()
        else:
            return super().default(o)
