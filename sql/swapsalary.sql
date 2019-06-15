Update salary set sex =
    case sex
        when 'F' then 'M'
        when 'M' then 'F'
    end;