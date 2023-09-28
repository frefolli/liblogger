# LibLogger

A simple logging library for C++.

## Basically

One is supposed to declare a `Logger`, which can be either a `LoggerChanneled` (logger -> channel), or a `LoggerMultiChannel` (logger -> all channels).

## Policy

The Log levels are: ALL = minx, TRACE, DEBUG, INFO, WARN, ERROR, FATAL, OFF = max. If a Logger is in level = X, it will log all messages in levels = Y <= X.

Simple as that.
