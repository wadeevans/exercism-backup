function score(str)
    total = 0
    str = uppercase(str)
    for c in str
        if occursin(c, "AEIOULNRST") 
            total += 1
        elseif occursin(c, "DG")
            total += 2
        elseif occursin(c, "BCMP")
            total += 3
        elseif occursin(c, "FHVWY")
            total += 4
        elseif occursin(c, "K")
            total += 5
        elseif occursin(c, "JX")
            total += 8
        elseif occursin(c, "QZ")
            total += 10
        end
    end
    return total
end
