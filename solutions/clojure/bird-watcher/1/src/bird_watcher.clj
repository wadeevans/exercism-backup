(ns bird-watcher)

(def last-week 
  [0, 2, 5, 3, 7, 8, 4]
  )

(defn today [birds]

  (birds (- (count birds) 1))
  )

(defn inc-bird [birds]
  (assoc birds (- (count birds) 1) (+ 1 (today birds)))
  )

(defn day-without-birds? [birds]
  (not (= nil (some #{0} birds)))
  )

(defn n-days-count [birds n]
  (reduce + (subvec birds 0 n))
  )

(defn busy-days [birds]
  (count (filter #(>= % 5) birds))
  )

(defn odd-week? [birds]
  (=  birds [1 0 1 0 1 0 1])
  )
