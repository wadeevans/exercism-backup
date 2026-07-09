(ns interest-is-interesting)

(defn interest-rate
  "TODO: add docstring"
  [balance]
  (cond (< balance 0) (double -3.213)
    (< balance 1000) (double 0.5)
    (< balance 5000) (double 1.621)
    :else (double 2.475))
  )

(defn annual-balance-update
  "TODO: add docstring"
  [balance]
  (bigdec (+ balance (* (abs balance) (/ (bigdec (interest-rate (double balance))) 100.0M))))
  )

(defn amount-to-donate
  "TODO: add docstring"
  [balance tax-free-percentage]
  (cond (> balance 0) (int (* 2 (* balance (/ tax-free-percentage 100))))
    :else (int 0.0))
  )