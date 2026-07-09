(defpackage :lillys-lasagna
  (:use :cl)
  (:export :expected-time-in-oven
           :remaining-minutes-in-oven
           :preparation-time-in-minutes
           :elapsed-time-in-minutes))

(in-package :lillys-lasagna)

;; Define function expected-time-in-oven
(defun expected-time-in-oven () "returns the expected time in the oven" 337)

;; Define function remaining-minutes-in-oven
(defun remaining-minutes-in-oven (minutes-in-oven-already) "returns the remaining cooking time in minutes" (- (expected-time-in-oven) minutes-in-oven-already))

;; Define function preparation-time-in-minutes
(defun preparation-time-in-minutes (layers) "returns preparation time based on number of layers" (* layers 19))

;; Define function elapsed-time-in-minutes
(defun elapsed-time-in-minutes (layers minutes-in-oven-already) "returns the sum of the preparation time and the elapsed cooking time" (+ (preparation-time-in-minutes layers) minutes-in-oven-already))
