import wave
import numpy as np
import matplotlib.pyplot as plt

wav_file = wave.open('musicbox.wav', 'r')
wav_file_info = wav_file.readframes(-1)
wav_file_info = np.fromstring(wav_file_info, np.int16)
f = wav_file.getframerate()
wav_file.close()

plt.subplot(211)
plt.plot(wav_file_info)
plt.ylabel('Amplitude')
plt.title('Waveform ang spectrogram of timian.wav')

plt.subplot(212)
plt.specgram(wav_file_info, Fs=f, scale_by_freq=True, sides='default')
plt.ylabel('Frequency')
plt.xlabel('time(seconds)')
plt.show()
