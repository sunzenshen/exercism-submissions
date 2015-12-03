def detect_anagrams(target, candidates):
    """ Given a target string and a space-separated list of candidates,
        find the anagrams of the target string """
    matches = []
    for candidate in candidates:
        if is_anagram(target, candidate):
            matches.append(candidate)
    return matches

def is_anagram(target, candidate):
    """ Returns true if the candidate string is an anagram of the target """
    if target == candidate:
        # Identical strings are not anagrams of each other
        return False
    elif get_key(target) == get_key(candidate):
        # The number of letters match, so the two words are anagrams
        return True
    else:
        # Letters on either side don't match up as anagrams
        return False

def get_key(text):
    """ Generates a key from a string,
        which is the alphabetically sorted letters """
    return sorted(text)
