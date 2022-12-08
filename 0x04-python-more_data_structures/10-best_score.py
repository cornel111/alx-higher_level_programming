#!/usr/bin/python3

def best_score(a_dictionary):
    if a_dictionary is not None:
        score = None
        person = None
        for k in a_dictionary.keys():
            if score is None or a_dictionary[k] > score:
                score = a_dictionary[k]
                person = k
        return person 
