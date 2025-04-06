#include <vector>
#include <cmath>

extern "C" {
    void calculate_rsi_simple(double* prices, int length, double* results) {
        int period = 14;
        
        if (length <= period) {
            for (int i = 0; i < length; i++) {
                results[i] = 50.0; // Neutral RSI value
            }
            return;
        }

        // Calculate price changes
        std::vector<double> changes(length - 1);
        for (int i = 0; i < length - 1; i++) {
            changes[i] = prices[i+1] - prices[i];
        }

        // First RSI value
        double avg_gain = 0.0;
        double avg_loss = 0.0;
        
        for (int i = 0; i < period; i++) {
            if (changes[i] > 0) avg_gain += changes[i];
            else avg_loss -= changes[i];
        }
        
        avg_gain /= period;
        avg_loss /= period;
        
        double rs = (avg_loss == 0) ? 100.0 : avg_gain / avg_loss;
        results[period] = 100.0 - (100.0 / (1.0 + rs));

        // Calculate remaining RSI values
        for (int i = period + 1; i < length; i++) {
            double change = changes[i-1];
            double gain = (change > 0) ? change : 0.0;
            double loss = (change < 0) ? -change : 0.0;
            
            avg_gain = (avg_gain * (period-1) + gain) / period;
            avg_loss = (avg_loss * (period-1) + loss) / period;
            
            rs = (avg_loss == 0) ? 100.0 : avg_gain / avg_loss;
            results[i] = 100.0 - (100.0 / (1.0 + rs));
        }
        
        // Fill beginning with neutral value
        for (int i = 0; i < period; i++) {
            results[i] = 50.0;
        }
    }
}
