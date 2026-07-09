public class LogLevels {
    
    public static String message(String logLine) {
       //  return logLine.split(":")[1].trim();
        int split = logLine.indexOf(':') + 1;
        return logLine.substring(split).trim();
    }

    public static String logLevel(String logLine) {
        return logLine.split(":")[0].replace("[", "").replace("]", "").toLowerCase();
    }

    public static String reformat(String logLine) {
        return message(logLine) + " (" + logLevel(logLine) + ")"; 
    }
}
