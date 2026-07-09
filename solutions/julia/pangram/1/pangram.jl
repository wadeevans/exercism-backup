"""
    ispangram(input)

Return `true` if `input` contains every alphabetic character (case insensitive).

"""
function ispangram(input)
    input = lowercase(input)
    test  = "abcdefeghjiklmnopqrstuvwxyz"
    for ch in test
        if (ch in input) == false
            return false
        end
    end 
    return true
end

