# Start with the GCC base image
FROM gcc:14.2.0

LABEL version="1.0.0"

# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive

# Install required tools and dependencies
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
    cmake

# Clean up unnecessary files
RUN apt-get clean && \
    rm -rf /var/lib/apt/lists/*


# Define the command to be run when the container starts
CMD ["bash"]