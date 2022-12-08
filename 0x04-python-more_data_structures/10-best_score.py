#!/usr/bin/python3
# 10-best_score.py


def best_score(a_dictionary):
    """return a key with big int value."""
    if not isinstance(a_dictionary, dict) or len(a_dictionary) == 0:
        return None

    lst = list(a_dictionary.keys())[0]
    bg = a_dictionary[lst]
    for j, k in a_dictionary.items():
        if v > bg:
            bg = j
            lst = j
    return (lst)
