"""
Copyright (c) 2023 Manasvi Goyal. All rights reserved.

kaitai_awkward: Kaitai Struct runtime for Awkward Arrays
"""


from __future__ import annotations

from ._version import version as __version__

__all__ = ("__version__", "Reader")

from .reader import Reader
