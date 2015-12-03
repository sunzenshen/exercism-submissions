def song(start_num, end_num=0):
    return ""

def verse(num_bottles):
    """ Recite the n-th verse of the beer song. """
    if num_bottles == 0:
        return ("No more bottles of beer on the wall, no more bottles of beer.\n"
                "Go to the store and buy some more, 99 bottles of beer on the wall.\n")
    elif num_bottles == 1:
        return ("1 bottle of beer on the wall, 1 bottle of beer.\n"
                "Take it down and pass it around, no more bottles of beer on the wall.\n")
    elif num_bottles == 2:
        return ("2 bottles of beer on the wall, 2 bottles of beer.\n"
                "Take one down and pass it around, 1 bottle of beer on the wall.\n")
    else:
        return ""
