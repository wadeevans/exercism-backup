(ns cars-assemble)

(defn production-rate
  "Returns the assembly line's production rate per hour,
   taking into account its success rate"
  [speed](cond (= speed 10) (* 0.77 (* speed 221.0))
           (= speed 9) (* 0.8 (* speed 221.0))
           (> speed 4) (* 0.9 (* speed 221.0))
           :else (* speed 221.0)) 
  )

(defn working-items
  "Calculates how many working cars are produced per minute"
  [speed]
  (int (/ (production-rate speed) 60))
  )
