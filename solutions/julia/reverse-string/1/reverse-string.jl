using Unicode

function myreverse(str)
    rev_str = ""
    for c in graphemes(str)
        rev_str = string(c, rev_str)
    end
    return rev_str
end
